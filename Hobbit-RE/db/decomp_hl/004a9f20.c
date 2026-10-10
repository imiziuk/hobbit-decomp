
void __fastcall FUN_004a9f20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00549470(param_1 + 0x380);
  FUN_00549580(param_1 + 0x380);
  if (iVar1 != 0) {
    FUN_0066c3a0(7,0xa2);
    FUN_0066db80(iVar1,0);
    puVar3 = (undefined2 *)(param_1 + 0x26);
    iVar1 = 0x10;
    do {
      uVar4 = CONCAT31(CONCAT21(*puVar3,*(undefined1 *)((int)puVar3 + -1)),
                       *(undefined1 *)(puVar3 + -1));
      uVar2 = FUN_0041b9c0(0x41200000,0x41200000);
      FUN_0066e5a0(puVar3 + -0x13,uVar2,uVar4);
      puVar3 = puVar3 + 0x1c;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_0066d9a0();
    return;
  }
  return;
}

