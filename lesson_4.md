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
