回车:cannage return '\r'

换行:    '\n'

'\n'='\n'+\'r' in UNIX system.

windows '\n'='\n' in windows system.

"key map"

map,ss :set spell<cr>

"map 表示在普通模式下的一种映射关系"

map indicate a reflected relationship in ordinary mode .

在vim的普通模式下按 ,ss 可以显示错误的拼写，如果在.c文件中，该功能只检查注释的拼写不检查代码的拼写
check spellingmistake use ,ss in vim‘s ordinary mode .

map <tab> :bn<rc>

means you can use <tab> in vim with its ordinary mode to switch two different file

imap <esc> jj

表示在插入模式下连续快速按两次jj可直接切换的普通模式下 imap means a reflect relationship in ordinary mode

## how to use ctags to check fuction in c file 

tips: ctags also can use to check serval files like normal c file .

1. install ctags

2. ctags "your c file" 

3. ls creat a tags file 

4. in vim 在函数声明或函数名上Ctrl-]可直接查看该函数，Ctrl-t 只可返回到原处

5. Ctrl-o go back the older place you have visited;
   Ctrl-i go back the newer place you have visited.


ldd 查看 一个文件在标准库中的位置


# my .vimrc

        set number

        set hidden
        " 不用保存就可以切换vim同时打开的两个文件“”用 bn bp “ 

        set autoindent
        "换行后自动对齐"

        set expandtab
        "把<tab>展开成空格“

        set tabstop=4
        "让一个<tab>等于4个空格

        set shiftwidth=4
        "shift_v + >

        " insert mode Ctrl-t or Ctrl-d 处理极个别行不对齐的情况

        set dictionary=/usr/share/dict/words

        "key map

        map,ss :set spell<cr>

        map <tab> :bn<cr>

        imap jj <esc>



## git revert HEAD

当将一个垃圾修该 git push到服务器上， git reset --hard HEAD^ 只在本地能将垃圾修改还原到以前的版本， 如果重新修改 git push的话 ，会和服务器上的版本冲突，git push 会不成功. 只有和服务器上的版本一致才可行，此时将服务器上错我的版本 git pull 下来，用git revert HEAD 回到以前的版本 (此时的版本是垃圾修改前的版本）中间多两次垃圾修改 一次错误， 一次去除错误.

##git checkout + 版本号，可回到先前的版本.
    git checkout master 回到修改之前的版本

    git branch 查看当前的分支

    git checkout + 版本号 + -b + 版本名  （可给一个历史版本起名字，然后用git checkout + 版本名回到该版本）

## tig

http://jonas.nitro.dk/tig/

        git clone git URL:

## a  suggest software

        gitk   qgit

##git br -D one_file_state
        
        Delete a branch (you must exit this branch)


## git add .

        add all file in current folder.

## git commit -a -v
        
        you can scan you version in detail

        commit -a -v = ci (in put them in .gitconfig file at home list).

## which git 

        view git where are you install

## locate "file name" 

        you can say the file and ralationed file are locate where, but you can only find old file only if you update date libary everyday.

        find file by name .  locate vimrc
                             sudo  updatedb  (update date libaryi)
## find xxx|grep git 
        find git in xxx file 
        
        (找特定文件夹能匹配字符串的文件)
        
        xxx file folder name    "|"  管道符
        
        grep 专门用字符串匹配作筛选

        find xxx list xxx file folder all files. 

##ps aux | grep firefox 
        
        list firefox 进程

        (ps aux) list all progress are runnning in system.
        
        kill + progress number  关闭该程序

        kill + -9 + 进程号 强行关闭该程序

##查找特定项目特定字符串


用make编译，文件夹中必需有makefile文件

链接标准库

        -l+有效库名

## how to use xxx software to find file and edit it 
    like xxx hello

        1.search hen in github list 
        
        2.git clone the hen 

        3.cd ~/hen/search/curse/

        4.open README vim  
        
        5. NEXT   make 

        6.sudo make install  

        7. xxx key words
