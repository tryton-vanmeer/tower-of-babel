# Tower of Babel

Code examples in different languages.

Each folder is a code example, with specific languages in subfolders.

# Dependencies

**Arch Linux:** `pacman -S base-devel meson`

**Fedora:** `dnf groupinstall "Development Tools" && dnf install meson`

**Ubuntu:** `apt install build-essential meson`

## .NET Core

**Arch Linux:** `pacman -S dotnet-sdk`

**Fedora:** `dnf install dotnet`

**Ubuntu:** https://docs.microsoft.com/en-us/dotnet/core/install/linux-ubuntu

## Java

**Arch Linux:** `pacman -S jdk-openjdk`

**Fedora:** `dnf install java-latest-openjdk-devel`

**Ubuntu:** `apt install openjdk-<version>-jdk`

## JavaScript

**Arch Linux:** `pacman -S nodejs`

**Fedora:** `dnf install nodejs`

**Ubuntu:** `apt install nodejs`

## Julia

**Arch Linux:** `pacman -S julia`

**Fedora:** `dnf install julia`

**Ubuntu:** `apt install julia`

## Python

**Arch Linux:** `pacman -S python3`

**Fedora:** `dnf install python3`

**Ubuntu:** `apt install python3`

## Rust

**Arch Linux:** `pacman -S rust`

**Fedora:** `dnf install cargo`

**Ubuntu:** `apt install cargo`

## Vala

**Arch Linux:** `pacman -S vala`

**Fedora:** `dnf install vala`

**Ubuntu:** `apt install valac`

# Running

When in the example's language subfolder:

## C

```
meson build
ninja -C build
./build/<c-example>
```

## .NET Core

`dotnet run`

## Java

```
java <java-example>.java
```

## JavaScript

`./<js-example>.js`

## Julia

`./<julia-example>.py`

## Python

`./<python-example>.py`

## Rust

`cargo run`

## Vala

```
meson build
ninja -C build
./build/<vala-example>
```