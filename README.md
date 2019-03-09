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
2. Cmd + T to open the run task tool.
3. Backspace to clear any auto-populated characters.
4. `task ` ("task" followed by a space) will open a drop down of the build options. Select build or build and run. These have been defined in the tasks.json.

## Scripts

### tasks.json
This file has been configured to `build and run` or `build` main.cpp. It calls compile.sh to do this.

### compile.sh
This file manages compiling and running main.cpp. It takes two aruments:
	1. path to main.cpp
	2. path of output binary

### create_project.sh
This file sits in the root of the repo and is called to create a new project with the above directory tree, scripts, and source code.
It takes one argument:
   1. The name of the project folder.