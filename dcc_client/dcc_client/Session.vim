let SessionLoad = 1
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/Code/AetherGrid/dcc_client/dcc_client
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +606 P2PClient.cpp
badd +32 SettingsConsts.h
badd +668 Main.cpp
badd +31 P2PClient.h
badd +419 Blockchain.cpp
badd +41 strops.h
badd +1 indicators.hpp
badd +94 Console.h
badd +1 ~/Code/Distributed-Compute-Coin/dcc_client/CMakeLists.txt
badd +15 CMakeLists.txt
badd +25 Blockchain.h
badd +352 Miner.cpp
badd +255 Console.cpp
badd +1 strops.cpp
badd +1 term://~/Code/Distributed-Compute-Coin/dcc_client/dcc_client//336272:/bin/bash
badd +12 ~/Code/Distributed-Compute-Coin/dcc_client/out-linux/dcc_client/out.txt
badd +28 System.cpp
badd +12 System.h
argglobal
%argdel
$argadd P2PClient.cpp
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit P2PClient.cpp
argglobal
setlocal fdm=expr
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
49
normal! zo
56
normal! zo
69
normal! zo
117
normal! zo
125
normal! zo
128
normal! zo
187
normal! zo
190
normal! zo
192
normal! zo
234
normal! zo
236
normal! zo
250
normal! zo
266
normal! zo
436
normal! zo
460
normal! zo
480
normal! zo
497
normal! zo
499
normal! zo
540
normal! zo
586
normal! zo
599
normal! zo
632
normal! zo
655
normal! zo
689
normal! zo
707
normal! zo
776
normal! zo
800
normal! zo
826
normal! zo
837
normal! zo
let s:l = 524 - ((11 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 524
normal! 033|
tabnext
edit P2PClient.h
argglobal
balt P2PClient.cpp
setlocal fdm=expr
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 32 - ((29 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 32
normal! 0
tabnext
edit Blockchain.cpp
argglobal
setlocal fdm=expr
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
19
normal! zo
35
normal! zo
51
normal! zo
53
normal! zo
54
normal! zo
68
normal! zo
247
normal! zo
434
normal! zo
443
normal! zo
513
normal! zo
515
normal! zo
536
normal! zo
540
normal! zo
566
normal! zo
567
normal! zo
568
normal! zo
581
normal! zo
635
normal! zo
650
normal! zo
662
normal! zo
663
normal! zo
666
normal! zo
667
normal! zo
683
normal! zo
743
normal! zo
858
normal! zo
883
normal! zo
917
normal! zo
970
normal! zo
978
normal! zo
987
normal! zo
993
normal! zo
1058
normal! zo
1174
normal! zo
let s:l = 176 - ((40 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 176
normal! 040|
tabnext
edit Miner.cpp
argglobal
balt Blockchain.cpp
setlocal fdm=expr
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
16
normal! zo
30
normal! zo
146
normal! zo
164
normal! zo
178
normal! zo
185
normal! zo
208
normal! zo
218
normal! zo
220
normal! zo
345
normal! zo
let s:l = 352 - ((27 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 352
normal! 083|
tabnext
edit Console.cpp
argglobal
balt Miner.cpp
setlocal fdm=expr
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
25
normal! zo
200
normal! zo
242
normal! zo
249
normal! zo
let s:l = 292 - ((44 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 292
normal! 0
tabnext
edit strops.cpp
argglobal
balt Console.cpp
setlocal fdm=expr
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
108
normal! zo
let s:l = 109 - ((27 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 109
normal! 0
tabnext
edit Console.h
argglobal
setlocal fdm=expr
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
10
normal! zo
let s:l = 94 - ((41 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 94
normal! 0
tabnext
edit Blockchain.h
argglobal
balt Blockchain.cpp
setlocal fdm=expr
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 37 - ((36 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 37
normal! 0
tabnext
edit Main.cpp
argglobal
balt P2PClient.cpp
setlocal fdm=expr
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
61
normal! zo
124
normal! zo
332
normal! zo
343
normal! zo
356
normal! zo
425
normal! zo
579
normal! zo
742
normal! zo
758
normal! zo
let s:l = 69 - ((27 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 69
normal! 013|
tabnext
edit term://~/Code/Distributed-Compute-Coin/dcc_client/dcc_client//336272:/bin/bash
argglobal
balt Main.cpp
setlocal fdm=manual
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
tabnext
edit SettingsConsts.h
argglobal
setlocal fdm=expr
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 18 - ((17 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 18
normal! 05|
tabnext 9
set stal=1
if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0 && getbufvar(s:wipebuf, '&buftype') isnot# 'terminal'
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20
let &shortmess = s:shortmess_save
let s:sx = expand("<sfile>:p:r")."x.vim"
if filereadable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &g:so = s:so_save | let &g:siso = s:siso_save
set hlsearch
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
