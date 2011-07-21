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
