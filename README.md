# Tower of Babel

Code examples in different languages.

Each folder is a code example, with specific languages in subfolders.

# Dependencies

**Arch Linux:** `pacman -S base-devel`

## .NET Core

**Arch Linux:** `pacman -S dotnet-sdk`

## Python

**Arch Linux:** `pacman -S python3`

## Rust

**Arch Linux:** `pacman -S rust`

## Vala

**Arch Linux:** `pacman -S vala`

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