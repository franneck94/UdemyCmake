conan_d:
	rm -rf build
	mkdir build
	cd build && conan install .. -s build_type=Debug -s compiler.cppstd=17 --output-folder=. --build missing

conan_r:
	rm -rf build
	mkdir build
	cd build && conan install .. -s build_type=Release -s compiler.cppstd=17 --output-folder=. --build missing

# // Third party package managers like vcpkg, conan, etc. are dedicated to providing dependencies. They typically have
# // “recipes” for how to provide each dependency and they effectively allow a project to say “give me this” and leave it
# // up to the package manager to take care of the details of how that’s done. That’s a gross over-simplification, but it’s
# // close enough for the purpose of discussion here. Package managers are generally well-suited to publicly available
# // dependencies, but some do support private dependencies as well. Users are typically responsible for making the package
# // manager available on their system in some way.
# // FetchContent provides a way for a project to say “give me this, and if not provided by other means, use this method
# //  to get it”. With CMake 3.23 and earlier, it was more like “give me this and use this method to get it”, but CMake
# // 3.24 added support for integration with find_package() and dependency providers, so it now gives you the ability
# // to try a package manager first, and if that doesn’t supply it, fall back to the download-and-build-from-source details.
# // CMake itself doesn’t get involved in defining “recipes” for dependencies for either method. For package managers,
# // the package managers provide the “how”. For FetchContent, the project provides the “how” (with CMake 3.24 or later,
# // it’s more like the “how, if nothing else provides it”).
# // FetchContent is often a good fit within organisations where they want to bring together multiple internal projects
# //  under active development into one build. Developers don’t have to install an extra tool and it has direct support for
# //  working across multiple repositories at once. With FetchContent, a dependency is only added to the build if something
# //   asks for it, which means you can use CMake cache variables to turn features on and off, and the build will not ask
# //   for a dependency that isn’t used.
# // Package managers take an additional step to set up, which some people don’t like, but others don’t mind. They
# // usually require you to adapt your workflow in some way to accommodate how they expect the build to be done. These
# // adjustments can range from quite minor to rather disruptive. Package managers can be a good fit for bringing in mature
# // dependencies, especially popular ones that many projects use. The maintainers of these tools often put in a lot of
# // work to fix and patch dependencies to make them more reliable to use, which can save you a lot of work (if they get it
# //  right!). People often underestimate the value these tools provide by curating and managing how the dependencies are
# //  built. A common weakness of package managers is that they usually want you to define your dependencies up front,
# //  so you can end up pulling in dependencies you may not actually need.
# // My general advice would be to use FetchContent for internal dependencies if they are being actively developed.
# // If package managers don’t present any major issues for your situation, prefer to use those to provide public
# //  dependencies. If you are inside an organisation and you have some internal projects that are relatively mature,
# //  consider whether a package manager might still be appropriate for making those available to others within the
# //  company. New features available from CMake 3.24 should help with transitioning projects from FetchContent-provided
# //   to package manager-provided once a project matures, should that be desired.

# With Vcpkg, we don’t need to provide a version for the package. I assume that Vcpkg downloads the latest,
# most stable version of the specified library.
# Interestingly, this might not suit your needs, and it may cause problems if the version of the library Vcpkg
# pulls is not compatible with the version you have developed with!

# Although both package managers are fairly easy to install, there are differences in the process due to how these
#  managers have been written.

# Conan, for example, is mainly written in Python, therefore it requires a modern Python interpreter to be installed in
#  your system, as well as the pip package manager. For this reason, the Conan installation page recommends Python >= 3.5
# installed with pip3. Check out the Conan installation guide if you’re interested in installing this package manager.

# At first glance, from their Github repo, it seems that Vcpkg is mainly written in CMake scripts. However, by taking a
# look at their bootstrap scripts, we see that it builds the vcpkg tool from C++ source code. Therefore, the Vcpkg
# tool itself is written in C++. For more information on installing Vcpkg, check out their getting started with Vcpkg guide.

# In conclusion, Conan has more installation dependencies than Vcpkg. In other words, if your dev environment already
# has CMake and C++ compilers, you may find it easier to install Vcpkg compared to Conan. Anyway, both tools are fairly
# straightforward to install and get started.

# At the time of writing this post, Conan has over 900 official packages in the Conan index, while Vcpkg has over
# 1700 library ports. Unlike Conan, a Vcpkg “port” isn’t necessarily a library package.
# some modularised libraries have many port scripts! However, Vcpkg’s website claims you can pick from over
# 1500 open source libraries.
# It is clear that Vcpkg wins when it comes to the number of libraries available.
