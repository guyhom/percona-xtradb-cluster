.. _yum:

=======================================================
Installing |PXC| on Red Hat Enterprise Linux and CentOS
=======================================================

Percona provides :file:`.rpm` packages for 64-bit versions
of Red Hat Enterprise Linux 6 (Santiago) and 7 (Maipo),
including its derivatives that claim full binary compatibility,
for example: CentOS, Oracle Linux, Amazon Linux AMI, and so on.

.. note:: |PXC| should work on other RPM-based distributions,
   but it is tested only on RHEL and CentOS versions 6 and 7.

The packages are available in the official Percona software repository
and on the `download page
<http://www.percona.com/downloads/Percona-XtraDB-Cluster-57/LATEST/>`_.
It is recommended to intall |PXC| from the official repository
using :command:`yum`.

.. contents::
   :local:

Prerequisites
=============

.. note:: You need to have root access on the node
   where you will be installing |PXC|
   (either logged in as a user with root privileges
   or be able to run commands with :command:`sudo`).

.. note:: Make sure that the following ports are not blocked by firewall
   or used by other software. |PXC| requires them for communication.

   * 3306
   * 4444
   * 4567
   * 4568

.. note:: The `SELinux <https://selinuxproject.org>`_ security module
   can constrain access to data for |PXC|.
   The best solution is to change the mode
   from ``enforcing``  to ``permissive`` by running the following command::

    setenforce 0

   This only changes the mode at runtime.
   To run SELinux in permissive mode after a reboot,
   set ``SELINUX=permissive`` in the :file:`/etc/selinux/config`
   configuration file.

Installing from Percona Repository
==================================

1. Install the Percona repository package:

   .. code-block:: bash

      $ sudo yum install http://www.percona.com/downloads/percona-release/redhat/0.1-4/percona-release-0.1-4.noarch.rpm

   You should see the following if successful::

      Installed:
        percona-release.noarch 0:0.1-4

      Complete!

#. Check that the packages are available:

   .. code-block:: bash

      $ sudo yum list | grep Percona-XtraDB-Cluster-57

      Percona-XtraDB-Cluster-57.x86_64           5.7.14-26.17.1.el7          percona-release-x86_64
      Percona-XtraDB-Cluster-57-debuginfo.x86_64 5.7.14-26.17.1.el7          percona-release-x86_64


#. Install the |PXC| packages:

   .. code-block:: bash

      $ sudo yum install Percona-XtraDB-Cluster-57

   .. note:: Alternatively you can install
      the ``Percona-XtraDB-Cluster-full-57`` meta package,
      which contains the following additional packages:

      * ``Percona-XtraDB-Cluster-devel-57``
      * ``Percona-XtraDB-Cluster-test-57``
      * ``Percona-XtraDB-Cluster-debuginfo-57``
      * ``Percona-XtraDB-Cluster-galera-3-debuginfo``
      * ``Percona-XtraDB-Cluster-shared-57``

#. Start the |PXC| server:

   .. code-block:: bash

      $ sudo service mysql start

#. Copy the automatically generated temporary password
   for the superuser account:

   .. code-block:: bash

      $ sudo grep 'temporary password' /var/log/mysqld.log

#. Use this password to log in as ``root``:

   .. code-block:: bash

      $ mysql -u root -p

#. Change the password for the superuser account and log out. For example:

   .. code-block:: sql

      mysql> ALTER USER 'root'@'localhost' IDENTIFIED BY 'rootPass';
      Query OK, 0 rows affected (0.00 sec)

      mysql> exit
      Bye

#. Stop the ``mysql`` service:

   .. code-block:: bash

      $ sudo service mysql stop

.. _yum-testing-repo:

Testing and Experimental Repositories
-------------------------------------

Percona offers pre-release builds from the testing repository,
and early-stage development builds from the experimental repository.
You can enable either one in the Percona repository
configuration file :file:`/etc/yum.repos.d/percona-release.repo`.
There are three sections in this file,
for configuring corresponding repositories:

* stable release
* testing
* experimental

The latter two repositories are disabled by default.

If you want to install the latest testing builds,
set ``enabled=1`` for the following entries: ::

  [percona-testing-$basearch]
  [percona-testing-noarch]

If you want to install the latest experimental builds,
set ``enabled=1`` for the following entries: ::

  [percona-experimental-$basearch]
  [percona-experimental-noarch]

Next Steps
==========

After you install |PXC| and change the superuser account password,
configure the node according to the procedure described in :ref:`configure`.

