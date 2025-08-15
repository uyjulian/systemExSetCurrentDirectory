systemExSetCurrentDirectory
===========================

This Kirikiri (2/Z) plugin provides a method to set the current
directory.

Building
--------

After cloning submodules and placing ``ncbind`` and ``tp_stub`` in the
parent directory, a simple ``make`` will generate
``systemExSetCurrentDirectory.dll``.

How to use
----------

After ``Plugins.link("systemExSetCurrentDirectory.dll");`` is used, the
additional functions will be exposed under the ``System`` class.

License
-------

This project is licensed under the MIT license. Please read the
``LICENSE`` file for more information.
