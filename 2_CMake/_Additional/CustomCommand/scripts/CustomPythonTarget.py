import argparse
import glob
from pathlib import Path


def num_lines(fname: str) -> int:
    return sum(1 for _ in open(fname))


def main() -> None:
    parser = argparse.ArgumentParser(
        description="CustomPythonTarget",
    )

    parser.add_argument(
        "--input_dir",
        type=str,
        required=True,
    )

    parser.add_argument(
        "--output_dir",
        type=str,
        required=True,
    )

    args = parser.parse_args()
    input_dir: str = args.input_dir
    output_dir: str = args.output_dir

    print("Running the CustomPythonTarget script")

    content = []
    for file in glob.glob(f"{input_dir}/*.cc"):
        content.append(f"File: {file} has {num_lines(file)} lines")

    output_file = Path(output_dir) / "Stats.txt"
    with output_file.open("w") as f:
        f.writelines(content)


if __name__ == "__main__":
    main()
