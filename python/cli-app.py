#!/usr/bin/env python3

from argparse import ArgumentParser
import json


def greet(args):
    print(f"{args.greeting.capitalize()}, {args.name}")


def goodbye(args):
    print(f"{args.greeting.capitalize()}, {args.name}")


if __name__ == "__main__":
    parser = ArgumentParser()
    subparsers = parser.add_subparsers(title="subcommands", required=True)

    parser_greet = subparsers.add_parser("greet")
    parser_goodbye = subparsers.add_parser("goodbye")

    parser_greet.set_defaults(func=greet)
    parser_goodbye.set_defaults(func=goodbye)

    parser_greet.add_argument("greeting", choices=["hello", "hi", "hey"])

    parser_greet.add_argument("name", metavar="NAME", type=str)
    parser_goodbye.add_argument("name", metavar="NAME", type=str)

    args = parser.parse_args()
    args.func(args)
