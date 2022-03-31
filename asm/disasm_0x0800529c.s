    .include "asm/macros.inc"

    .syntax unified

    thumb_func_start sub_0800529c
sub_0800529c: @ 0x0800529c
    push {r4, r5, lr}
    adds r5, r0, #0
    adds r3, r1, #0
    subs r4, r2, #1
    cmp r2, #0
    beq lbl_080052c2
    movs r2, #1
    rsbs r2, r2, #0
lbl_080052ac:
    ldrb r1, [r3]
    ldrb r0, [r5]
    adds r5, #1
    adds r3, #1
    cmp r1, r0
    beq lbl_080052bc
    subs r0, r3, #1
    b lbl_080052c4
lbl_080052bc:
    subs r4, #1
    cmp r4, r2
    bne lbl_080052ac
lbl_080052c2:
    movs r0, #0
lbl_080052c4:
    pop {r4, r5}
    pop {r1}
    bx r1
    .align 2, 0

    thumb_func_start sub_080052cc
sub_080052cc: @ 0x080052cc
    push {r4, r5, r6, lr}
    sub sp, #0xc0
    adds r4, r0, #0
    adds r5, r1, #0
    adds r6, r2, #0
    ldr r2, lbl_080052f8 @ =0x04000204
    ldrh r0, [r2]
    ldr r1, lbl_080052fc @ =0x0000fffc
    ands r0, r1
    movs r1, #3
    orrs r0, r1
    strh r0, [r2]
    ldr r3, lbl_08005300 @ =sub_0800529c
    movs r0, #1
    bics r3, r0
    mov r2, sp
    ldr r0, lbl_08005304 @ =sub_080052cc
    ldr r1, lbl_08005300 @ =sub_0800529c
    subs r0, r0, r1
    lsls r0, r0, #0xf
    b lbl_08005314
    .align 2, 0
lbl_080052f8: .4byte 0x04000204
lbl_080052fc: .4byte 0x0000fffc
lbl_08005300: .4byte sub_0800529c
lbl_08005304: .4byte sub_080052cc
lbl_08005308:
    ldrh r0, [r3]
    strh r0, [r2]
    adds r3, #2
    adds r2, #2
    subs r0, r1, #1
    lsls r0, r0, #0x10
lbl_08005314:
    lsrs r1, r0, #0x10
    cmp r1, #0
    bne lbl_08005308
    mov r3, sp
    adds r3, #1
    adds r0, r4, #0
    adds r1, r5, #0
    adds r2, r6, #0
    bl _call_via_r3
    add sp, #0xc0
    pop {r4, r5, r6}
    pop {r1}
    bx r1
