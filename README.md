#compile
g++ -Wall vector1.cc -o hello

#staging
git add *.py 

#unstaged differences
git diff
#staged differences
git diff --staged

#untrack file (then add .gitignore)
git rm --cached README.md 

git commit -m 'initial project version'

git log
git log -p -3
git log --stat
git log --pretty=oneline
git log --pretty=format:"%h - %an, %ar : %s"
git log --pretty=format:"%h %s" --graph
git log --since=2.weeks
git log --grep 'messa'
git log --S 'diff'
git log --oneline --decorate --graph --all

#change last commit
git commit --amend

#show remote repos
git remote
git remote -v

#push (to remote branch)
git push -u origin master

#list tags
git tag
#create tag
git tag -a v1.0 -m "my version 1.0"
#push tag
git push origin v1.0

#display branches
git branch 
#create branch
git branch testing
#go to branch
git checkout v1.0

#merge (hotfix branch to master branch)
git checkout master
git merge hotfix
#see conflicts (if any exists after merge)
git status
#delete branch (after merge it is not needed)
git branch -d hotfix
#pull
git pull

#rebase
git checkout testing
git rebase master
git checkout master
git merge testing
git branch -d testing
