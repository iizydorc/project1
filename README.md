# Project 1: 
### Git and Github
##### Iris Izydorczak

   Using [Git](git-scm.com) I researched the method for merging branches, and I started with git checkout master and git merge
new_brach. The first time I attempted this it actually did work because I misread the instructions and modified the
“new_branch” twice rather than modifying each branch. However, this step helped me understand merging branches. Next,
I modified the files on each branch with comments and attempted to merge them again which resulted in the error

> “Auto-merging project0.cpp CONFLICT (content): Merge conflict in project0.cpp

> Automatic merge failed; 

> fix conflicts andthen commit the result.”

I remedeed this by entering the project0.cpp file on attom where the conflicting comments werehighlighted in blue and pink.
I clicked the “...” next to the blue section and selected the option “ours then theirs.” Then I added the file to the master
branch again which returned a message saying that the conflict was resolved. Then I commited and pushed that file onto the
main branch. I did realize it this point I undid and saved the file incorrectly in Atom such that the final version included
the words “Use me” and “<<<<< Head-” in comments so I had to save the correct version of the file, and add, commit, and push
it to the main branch so that the result would look nicer.
