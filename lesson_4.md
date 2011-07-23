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

4 in vim 在函数声明或函数名上Ctrl_]可直接查看该函数，Ctrl_t 只可返回到原处

ldd 查看 一个文件在标准库中的位置
