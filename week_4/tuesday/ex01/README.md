# Instructions
**Objective:** Get familiar working with GitHub collaboratively.

## Background information 
When software engineers collaborate on large projects, many employ GitHub's collaborative features. 

## Steps 
1. Make sure you have completed all the steps for [getting started](https://github.com/steph1111/F23_CS11_SI/tree/main#getting-started) with GitHub. This means you should have your forked repo cloned on your system
1. Follow the instructions on the projector to `clone` the repo. This is different than `fork`ing.
    ```sh
    git clone git@github.com:steph1111/CS11-F24.git
    ```
2. Find a partner to work with.
### Person 1
3. Create a new branch where `<branch-name>` is the name of the branch.
    ```sh
    git checkout -b <branch-name>
    ```
3. Modify the program adding your name.
5. Add the modified file
    ```sh
    git add collaborate.cpp
    ```
5. Commit your changes with the `commit` command
    ```sh
    git commit -m "Added my name"
    ``` 
6. Push your changes to GitHub with the `push` command
    ```sh
    git push origin <branch-name>
    ```
### Person 2
7. `fetch` the new branches created.
    ```sh
    git fetch
    ```
8. Checkout the branch your partner created.
    ```sh
    git checkout <branch-name>
    ```
9. `pull` their changes onto your system.
    ```sh
    git pull origin <branch-name>
    ```
10. Modify the program adding your name.
11. Stage (`add`), `commit` and `push` the changes.