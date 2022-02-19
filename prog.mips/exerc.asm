.text
.globl main

main: 

    addi $a0,$zero,1
    addi $a1,$zero,2
    addi $a2,$zero,3
    addi $a3,$zero,4
    jal exemplo_folha
    nop

exemplo_folha:

    # empilhando(salvando) os valores
    addi $sp,$sp,-12
    sw $t1, 8($sp)
    sw $t0, 4($sp)
    sw $s0, 0($sp)

    # corpo do procedimento
    add $t0,$a0,$a1
    add $t1,$a2,$a3
    sub $s0,$t0,$t1
    add $v0,$s0,$zero

    #desempilhando(restaurando) os valores
    lw $s0, 0($sp)
    lw $t0, 4($sp)
    lw $t1, 8($sp)
    addi $sp,$sp,12

    # retornando do procedimento
    jr $ra