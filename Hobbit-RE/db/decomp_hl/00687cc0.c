
undefined4 __thiscall FUN_00687cc0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  undefined4 uStack_108;
  undefined1 auStack_100 [256];
  
  uStack_108 = param_2;
  (**(code **)(*param_1 + 0x20))(auStack_100);
  iVar1 = FUN_006c0900(&uStack_108,&DAT_0075447c);
  *(int *)(unaff_retaddr + 0xc) = iVar1;
  if (iVar1 != 0) {
    FUN_006c19b1(iVar1,0,2);
    uVar2 = FUN_006c1a6a(*(undefined4 *)(unaff_retaddr + 0xc));
    *(undefined4 *)(unaff_retaddr + 0x10) = uVar2;
    FUN_006c19b1(*(undefined4 *)(unaff_retaddr + 0xc),0,0);
    return 1;
  }
  return 0;
}

