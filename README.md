# Udemy Course Beginning C++

## Structure
Each section of the course has one or more folders dedicated to it. These folders are structured as follows:

- Section (Project) Folder
	- .vscode
		- tasks.json
	- src
		- main.cpp
		- main.o
	- compile.sh


* __Section 4__ is structured differently. It has multiple projects inside it. This structure was abandoned due to the complexity of the tasks.json file and clunky usibiblity.


## Using VSCode to run a project
1. Open the project folder, e.g. _section9-challenge_. VSCode builds the path to the tasks.json file from this location. This is needed for the following command.
2. Use `Command + Shift + B` to compile and run the code.

## Using VSCode to build the project
1. Open the project folder, e.g. _section9-challenge_.
2. `Cmd + T` to open the run task tool.
3. Backspace to clear any auto-populated characters.
4. `task ` ("task" followed by a space) will open a drop down of the build options. Select build or build and run. These have been defined in the tasks.json.

## Build and test

Uses GoogleTest for unit testing.
1. Download git repo to project folder, e.g. ./sectionxx/.
2. Update `CMakeLists.txt`
3. From the project folder run `cmake .`
4. Then, `make`.
