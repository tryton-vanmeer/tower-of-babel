# CLI App

Simple CLI app that implements basic commands and subcommands.

Should support the following commands:

- `greet` <NAME>
  - accepts subcommands `hello`, `hi`, and `hey`
  - prints `Hello, $NAME`, `Hi, $NAME` and `Hey, $NAME`
- `goodbye` <NAME>
  - prints `Goodbye, $NAME`
- The above should accept a `--json` flag
  - print a JSON formatted string
  - {"interjection": "hello", "name": "$name"}

The app should explain the commands and flags when given `--help` / `-h`.

## STDIN and STDOUT

```
> cli-app --help
# format of help is subjective

> cli-app greet hello John
Hello, John

> cli-app greet hi Tom
Hi, Tom

> cli-app greet hey Jessica
Hey, Jessica

> cli-app goodbye Jane
Goodbye, Jane

> cli-app hello --json Bob
{
  "interjection": "hello",
  "name": "Bob"
}
```
