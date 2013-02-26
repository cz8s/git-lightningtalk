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
* Verteilt
* Mergen ist einfach
* Von Linus T.
* Offline commit

--exec feh -F -Z ~/privat/christoph.jpeg

--newpage 
--center Git workflow
--beginshelloutput
$ git clone lab:git-lightningtalk.git         
Cloning into 'git-lightningtalk'...
remote: Counting objects: 3, done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 3 (delta 0), reused 0 (delta 0)
Receiving objects: 100% (3/3), done.

--endshelloutput
--newpage 
--center Git workflow
--beginshelloutput
$ git checkout -b feature-x           
Switched to a new branch 'feature-x'
$ vim talk.tpp 

--endshelloutput
--newpage 
--center Git workflow
--beginshelloutput
$ git commit talk.tpp -m "tolles neues feature"          
[feature-x f65f917] tolles neues feature
 1 file changed, 1 insertion(+), 1 deletion(-)

--endshelloutput
--newpage 
--center Git workflow
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
--center Git workflow
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
--center Git workflow
--beginshelloutput
$  git push          
RSA host key for IP address '2001:868:100:300::200' not in list of known hosts.
Counting objects: 5, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 286 bytes, done.
Total 3 (delta 1), reused 0 (delta 0)
To lab:git-lightningtalk.git
   8b78aee..f65f917  master -> master
--endshelloutput
