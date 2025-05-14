# GitProject

This project is created to demonstrate my understanding of Git, including repository setup, branching, merging, and remote collaboration using GitHub.

## Project Structure

The project contains a simple C++ program that defines three classes:

- Student
- Teacher
- Manager

Each class is located on its own Git branch:

- StudentBranch
- TeacherBranch
- ManagerBranch

Each class uses a std::multi map to store names and integer values (such as names or grades), along with set , get and print all the data functions.

## Git Workflow

1. Initialized a local Git repository using Git Bash.
2. Created and switched between three branches (student-branch, teacher-branch, and manager-branch).
3. Committed code for each class on its respective branch.
4. Merged all three branches into the master branch.
5. Added a main function in the master branch to demonstrate usage of the three classes.
6. Pushed the repository with all branches to GitHub.
7. Forked the repository from another GitHub account.
8. Made a comment in the forked repo and submitted a pull request back to the main account (in a branch called ForkingBranch).

## Purpose

This project serves as a hands-on demonstration of Git and basic collaborative workflows, preparing for team-based Games development environments.
