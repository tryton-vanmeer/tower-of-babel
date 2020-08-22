# Tower of Babel

Code examples in different languages.

Each folder is a code example, with specific languages in subfolders.

# Dependencies

**Arch Linux:** `pacman -S base-devel`

**Fedora:** `dnf groupinstall "Development Tools"`

**Ubuntu:** `apt install build-essential`

## .NET Core

**Arch Linux:** `pacman -S dotnet-sdk`

**Fedora:** `dnf install dotnet`

**Ubuntu:** https://docs.microsoft.com/en-us/dotnet/core/install/linux-ubuntu

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

## .NET Core

`dotnet run`

## Python

`./<pythonexample>.py`

## Rust

`cargo run`

## Vala

```
meson build
cd build
ninja
./<valaexample>
```