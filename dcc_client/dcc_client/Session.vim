let SessionLoad = 1
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/Code/Distributed-Compute-Coin/dcc_client/dcc_client
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +420 P2PClient.cpp
badd +22 SettingsConsts.h
badd +471 Main.cpp
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
313
normal! zo
324
normal! zo
350
normal! zo
351
normal! zo
353
normal! zo
386
normal! zo
442
normal! zo
461
normal! zo
478
normal! zo
521
normal! zo
566
normal! zo
572
normal! zo
635
normal! zo
669
normal! zo
687
normal! zo
756
normal! zo
806
normal! zo
817
normal! zo
818
normal! zo
847
normal! zo
906
normal! zo
952
normal! zo
961
normal! zo
1068
normal! zo
1153
normal! zo
1187
normal! zo
1199
normal! zo
let s:l = 630 - ((44 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 630
normal! 0
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
58
normal! zo
114
normal! zo
124
normal! zo
205
normal! zo
207
normal! zo
322
normal! zo
333
normal! zo
346
normal! zo
415
normal! zo
423
normal! zo
428
normal! zo
575
normal! zo
578
normal! zo
614
normal! zo
let s:l = 344 - ((28 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 344
normal! 021|
tabnext
argglobal
if bufexists(fnamemodify("term://~/Code/Distributed-Compute-Coin/dcc_client/dcc_client//336272:/bin/bash", ":p")) | buffer term://~/Code/Distributed-Compute-Coin/dcc_client/dcc_client//336272:/bin/bash | else | edit term://~/Code/Distributed-Compute-Coin/dcc_client/dcc_client//336272:/bin/bash | endif
if &buftype ==# 'terminal'
  silent file term://~/Code/Distributed-Compute-Coin/dcc_client/dcc_client//336272:/bin/bash
endif
balt Main.cpp
setlocal fdm=manual
setlocal fde=b:anyfold_ind_buffer[v:lnum-1]
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=99
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 56 - ((55 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 56
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
let s:l = 23 - ((22 * winheight(0) + 28) / 56)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 23
normal! 036|
tabnext 1
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
