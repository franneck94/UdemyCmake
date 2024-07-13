import argparse
import glob


def num_lines(fname: str) -> int:
    return sum(1 for _ in open(fname))


def main() -> None:
    parser = argparse.ArgumentParser(
        description="CustomPythonTarget",
    )

    directory = parser.add_argument(
        "--directory",
        type=str,
        required=True,
    )

    args = parser.parse_args()
    directory = args.directory

    for file in glob.glob(f"{directory}/*.cc"):
        print(f"File: {file} has {num_lines(file)} lines")


if __name__ == "__main__":
    main()
