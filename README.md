# Tower of Babel

A collection of examples implemented in different languages.

# Dependencies

Instructions in this README and those within each language assume Fedora Linux. Make sure to adapt them for your OS or use the provided Containerfiles.

For basic build dependencies:

```shell
$ dnf groupinstall "Development Tools"
$ dnf install meson
```

## Language-specific Dependencies

Check the README under each language directory for their dependencies and how to run the code.

## .NET Core

**Arch Linux:** `pacman -S dotnet-sdk`

**Fedora:** `dnf install dotnet`

**Ubuntu:** https://docs.microsoft.com/en-us/dotnet/core/install/linux-ubuntu

## Java

**Arch Linux:** `pacman -S jdk-openjdk gradle`

**Fedora:** `dnf install java-latest-openjdk-devel`

**Ubuntu:** `apt install openjdk-<version>-jdk gradle`

## JavaScript

**Arch Linux:** `pacman -S nodejs`

**Fedora:** `dnf install nodejs`

**Ubuntu:** `apt install nodejs`

## Kotlin

**Arch Linux:** `pacman -S kotlin`

**Fedora:** N/A

**Ubuntu:** N/A

## Rust

**Arch Linux:** `pacman -S rust`

**Fedora:** `dnf install cargo`

**Ubuntu:** `apt install cargo`

## Vala

**Arch Linux:** `pacman -S vala`

**Fedora:** `dnf install vala`

**Ubuntu:** `apt install valac`
