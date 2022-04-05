# How to install the Conan Package Manager

Official installation guide is [here](https://docs.conan.io/en/latest/installation.html).

The conan database is [here](https://conan.io/center/).

## For Windows

1. Install Python3 (>=3.4), for example by [Anaconda](https://www.anaconda.com/) or by [Chocolatey](https://chocolatey.org/)
2. ``pip install conan``
3. ``conan user``
4. Run the conan command: ``conan``

## For Linux

1. Python3 (>=3.4) should be already installed. If not, install it with brew: apt-get install python3
2. ``pip install conan`` if this failes, due to system protection try: ``pip install --user conan``
3. Append conan to the PATH by: ``source ~/.profile``
4. ``conan user``
5. Run the conan command: ``conan``

## For MacOS

1. Python3 (>=3.4) should be already installed. If not, install it with brew: brew install python3
2. ``pip install conan`` if this failes, due to system protection try: ``pip install --user conan``
3. Append conan to the PATH by: ``source ~/.profile``
4. ``conan user``
5. Run the conan command: ``conan``
