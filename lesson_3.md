#note in class
##part I
	1. 系统经过 main 函数的返回值判断程序是否成功：

	2. 不关vim  vim中启动bash  输入" ： sh"  进入bash 开始编译，如果想退出 bash   Ctrl + d 或输入 exit. 修改后必需保存.
##part II
	1. press "u" means go back in vim , Ctrl+r means go ahead.
	2. echo $? check system return value of number
	3. The program is right return "0" else return "1".
	4.gcc -S b.c  generate(生成) " b.s "file  ,view the a.c AS(汇编) file .

#how to take detailed notes
	1.add 
	[core]
		editor = vim in .gitconfig open it in vim at home ~/.
	(change editable file into vim form)

	2.you can input" git commit -a" after you modify your note. 

	3.The head line you can input any thing because it is first line your topic. 
	
	key point(make sure sencod line is empty,after it you can take your detailed note)

 
给vim安装插件相当于把插件放到主目录的.vim中；
for instance ,snipMate

## snipMate address
	
http://www.vim.org/scripts/script.php?script_id=2540

	download it to somepalce ,unzip it like unzip snipmate.zip

##how to install snipMate 
	1.download  it to  a dir ,

	2.cd this dir.

	3.unzip snipMate.zip -d ~/.vim
	
	(-d means unzip to where)
	
	THE END

##how to set snipMate 
	1. cd ~/.vim/snippets
 
	2.open c.snippets in vim and veiw it or modify it 

	3.save and quit it .
## use snipMate in vim 
	1. vim a file  ,like vim h.c

	2. input key words ,like main , fun ,

	3.press "tab" button.
    
## tips

	say hello ten times with vim skills 
	
	yy--- to copy current line 
	
	dd --- to cut current line 

	p ----to past

	(in insert mode you can use Ctrl + n to complete the others content in current file )

##make "sudo apt-get install"  easy , rename it 

	1.  open .bashrc with vim in home list   ~/

	2.  input alias sagi ='sudo apt-get install'(make sure input correct no other input)
	
	3.  source .bashrc  (run .bashrc from the begining to the end)

## install two interesting software :

	fortune  &  cowsay 

## Delete a reporsitory(仓库)

	 open this reporsitory -> admin -> Delete this reporsitory 
## Delete a file in a reporsitory

	1. git rm this file  

	2. git commit -a 

	3. git push


##coding style

1. tab and space do not use them together, our suggestion is using 4 space instead a tab.

2. tips  
	set autoindent	(设置成回车后自动对齐)

	set expandtab  "把<tab> 展开成空格"

	set tabstop=4  "让一个<tab>等于4个空格"
    write them in .vim file of the home list .

    In insert mode Ctrl_t or Ctrl_d (处理极个别行不对齐的情况) can handle several special line not standard.

3. main in a c file  fun in a function file head file and function declarrtion in a file

##vim skills

1. help in vim  you can in put :h + "command" then you will know the command how to use.   

        :h i_+"command" represent the fuction in insert mode

        you can use :bd or :q exit it .

2.set dictionnary=/usr/share/dict/words       write them in .vimrc file 

        you can complete a words in the dictionary in vim by inputing Crtl_x_k at insert mode.

3. you can use Ctrl_n complete a phrase occured in vim .

4. in the search list of Github host input peter-vim you can see peter's .vimrc'

## some extral skill
        
how to visit other computer in a LAN(局域网)

        ifconfig view the IP address of your computer .

        sudo apt-get install openssh-server (install a software to let you computer become a service computer)

        ssh username@IP   

        input password

        how to stop the service     sudo service stop

        how to start the service     sudo service start 

        scp to copy a file use ssh   for instance , scp perter@192.168.1.17:~/hihihi .
        
        NOTICE: you must exit the computer you have visited by using Ctrl_d

        check the service  status of your computer :  ssh service status

if input an command failed , you can input the completed commmand + !! to run it .
