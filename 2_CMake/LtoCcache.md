# Build Tools

## Tooling

LTO: Link Time Optimization (LTO) is another name for intermodular optimization when performed during the link stage.
Ccache: Ccache (or “ccache”) is a compiler cache. It speeds up recompilation by caching previous compilations and detecting when the same compilation is being done again.

Documentation for LTO: [Link](https://llvm.org/docs/LinkTimeOptimization.html)

Documentation for Ccache: [Link](https://github.com/ccache/ccache)

## Install

Linux

```bash
sudo apt-get install ccache
```

MacOS

```bash
brew install ccache
```

Windows

```bash
choco install ccache
````
