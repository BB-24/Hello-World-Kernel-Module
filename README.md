# Hello World Kernel Module

A simple Linux Kernel Module that prints "Hello, World!" when loaded and "Goodbye, World!" when unloaded.

## Description

This is a basic example of a Linux Kernel Module (LKM) that demonstrates the fundamental structure of kernel module development. It uses the standard Linux kernel module macros and lifecycle functions.

## Requirements

- Linux kernel headers (must match your running kernel version)
- Build essentials (`build-essential` on Debian/Ubuntu)
- Root/sudo privileges for loading/unloading the module

### Installing kernel headers (Ubuntu/Debian):

```
bash
sudo apt-get update
sudo apt-get install build-essential linux-headers-$(uname -r)
```

### Installing kernel headers (RHEL/CentOS/Fedora):

```
bash
sudo yum install gcc make kernel-devel-$(uname -r)
```

## Building the Module

1. Clone or navigate to the project directory
2. Run the make command:

```
bash
make
```

This will create `hello.ko` (the kernel module object file).

## Loading the Module

To load the kernel module into the kernel:

```
bash
sudo insmod hello.ko
```

## Unloading the Module

To remove the kernel module from the kernel:

```
bash
sudo rmmod hello
```

## Viewing Output

The module prints messages to the kernel log buffer. To view these messages:

```
bash
dmesg
```

Or to continuously monitor:

```
bash
dmesg -w
```

You should see:
- `Hello, World! This is a kernel module.` - when loading
- `Goodbye, World! The kernel module is exiting.` - when unloading

## Cleaning Build Files

To remove the compiled files:

```
bash
make clean
```

## Module Information

To view module information:

```
bash
modinfo hello.ko
```

This will display:
- License: GPL
- Author: Your Name
- Description: A simple hello world kernel module
- Version: 1.0

## Project Structure

```
.
├── hello.c    # Source code for the kernel module
├── make       # Makefile for building the module
└── README.md  # This file
```

## License

This module is licensed under the GNU General Public License (GPL).

## Author

Your Name

## References

- [Linux Kernel Module Programming Guide](https://www.tldp.org/LDP/lkmpg/2.6/lkmpg.pdf)
- [Linux Kernel Documentation](https://www.kernel.org/doc/html/latest/)
