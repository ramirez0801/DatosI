
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt
 
 name "int2bc"
 
 
org 100h 

jmp start

;Declarcion de variables

int16 dw    ?
Arr   dw    5    DUP (1)
bcd   db    6    DUP (2)



;Procedimiento
s_llena proc
        
        push ax
        push cx
        push di
        
c_llena:        
        mov [di],al
        inc di
        loop c_llena
        
        
        
        pop di
        pop cx
        pop ax
        ret

s_llena endp


start:
    
    mov al,0
    mov cx,5
    lea di,Arr
    
    call s_llena   
    mov cx,6
    lea di,[bcd]
    call s_llena
    
    lea di,[Arr]
    add di,4
    xor dx,dx
    mov ax,[int16]
    mov bx,10
    
c_div:
    div bx
    mov [di],dl
    xor dx,dx
    dec di
    test ax,0ffh
    jne c_div
    lea di,[bcd]
    mov al,"0"
    mov cx,5
    call s_llena
    lea si,[bcd]
    
ascii:
    mov al,[si]
    add [di],al
    inc si
    inc di
    loop ascii
    
    
    
    int 20h
    end





