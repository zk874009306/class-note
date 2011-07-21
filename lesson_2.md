#git

my note 

1. creat a file 

2. input git init           //  (get . .. ..git)

3. vim hello.c 

4. git add hello.c   // （add hell.c to .git)

5. git  commit -a -m "first version"   // (creat a version file)

6. git                 // (查看以前的版本 )

7. git history + num  // (scan history)

       
END

## git basics

1. first create a dir

       mkdir ggg

2. now you MUST cd to this dir

       cd ggg

3. initializing this git dir

        git int

    now you can see a `.git` in this dir

        ls -a

4. now create a file

        vim hello.c

5. let git knows about this file

        git add hello.c

6. create the first version

        git commit -a -m "my first version"

  第二次修改使不能删除 .git 文件

  向一个文件里粘贴內容时，必须先进入插入模式


  注册github keys的生成:

  0.  home 目录上 input pwd ; 

  1.  在桌面目录上 input ssh-keygen 

  2.  dispay file  // input ls 

  3.  open id_rsa.pub  // vim id _rsa.pub

  4.  copy key to address and  creat it

#note at class

  当vim 打开一个文件出现异常状态时（重复打开或着异常关闭）就会生成一个垃圾文件 .  .swp 关闭窗口重新删除 垃圾文件后vim可正常打开该文件。


  Shift + ctrl + T 重新打开一个bash 
  Ctrl + Pgup /Pgdn 切换终端窗口

  vim 进入可是行模式 大写V

  copy press y

  cut press  d

  past   p 在光标位置下一行粘贴 P 在光标位置的上一行粘贴

  进入可视行模式后想退出该模式直接再按 v 即可

  进入可视行模式整体缩进 按 " < "  or  " > " .

  同时打开两个文件 显示一个 另一个存在 buffer 里 

  两个文件相互切换  vim  : ": bn " or  ": bp "

  当切换出现异常有一两个文件未保存的提示，可在桌面目录下用vim打开 .vimrc 文件在里边输入 set hidden 

  关闭一个文件 bd  (buffer delete)

## about .gitconfig

	1.open .gitconfig in vim 
	2.input [alias]
			throw = reset --hard HEAD
			throwh = reset --hard HEAD^
	3.[core]
		editor = vim 


