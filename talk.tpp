--bgcolor white
--color black
--author christoph
--title git lightningtalk
--date 26.2.2012

--newpage
--center What is Versioncontrol

* Mit vielen an einer Datei arbeiten
* Asynchron
* Historie
* Revert
* Blame

--newpage
--center Das besondere an git
* War mal kompliziert
* Verteilt
* Mergen ist einfach
* Von Linus T.
  (http://youtu.be/4XpnKHJAok8)
* Offline arbeiten

--newpage 
--center Git workflow - clone
--beginshelloutput
$ git clone lab:git-lightningtalk.git         
Cloning into 'git-lightningtalk'...
remote: Counting objects: 3, done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 3 (delta 0), reused 0 (delta 0)
Receiving objects: 100% (3/3), done.

--endshelloutput
--newpage 
--center Git workflow - branch
--beginshelloutput
$ git checkout -b feature-x           
Switched to a new branch 'feature-x'
$ vim talk.tpp 

--endshelloutput
--newpage 
--center Git workflow - commit
--beginshelloutput
$ git commit talk.tpp -m "tolles neues feature"          
[feature-x f65f917] tolles neues feature
 1 file changed, 1 insertion(+), 1 deletion(-)

--endshelloutput
--newpage 
--center Git workflow - merge
--beginshelloutput
$ git checkout master          
Switched to branch 'master'
$ git merge feature-x 
Updating 8b78aee..f65f917
Fast-forward
 talk.tpp |    2 +-
 1 file changed, 1 insertion(+), 1 deletion(-)

--endshelloutput
--newpage 
--center Git workflow - log
--beginshelloutput
$ git log             
commit 8b78aee6d5d01e95d23219bc3a4e52dd2137609a
Author: Christoph <chris@inferno.nadir.org>
Date:   Tue Feb 26 21:03:20 2013 +0100

    tolles neues feature

commit 5a38aee6d5d01e95d23219bc3a4e52dd2137605a
Author: Christoph <chris@inferno.nadir.org>
Date:   Tue Feb 26 20:00:23 2013 +0100

    doofen bug gefixed

		* recursion war schuld
    * hat zur racecondition gefuehrt

--endshelloutput
--newpage 
--center Git workflow - push
--beginshelloutput
$  git push          
Counting objects: 5, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 286 bytes, done.
Total 3 (delta 1), reused 0 (delta 0)
To lab:git-lightningtalk.git
   8b78aee..f65f917  master -> master
--endshelloutput

--newpage
--center Das tolle am branchen
* mergen
* atomisierung/kapselung
* cherrypicking

--newpage
--center git ist nicht nur für sourcecode super
* jekyll
* ikiwiki
* server-config/puppet
* bup
* dotfiles/etckeeper
* lightningtalks
