
void __thiscall
FUN_005893e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  ushort uVar1;
  undefined4 *puVar2;
  
  FUN_00589560(param_2);
  uVar1 = FUN_00589170();
  if (uVar1 != 0xffff) {
    puVar2 = (undefined4 *)((uint)uVar1 * 0x68 + *(int *)(param_1 + 8));
    *puVar2 = 6;
    FUN_005890d0(param_2,4);
    FUN_005890d0(&param_3,4);
    puVar2[0x14] = param_4;
    puVar2[0x16] = param_5;
    puVar2[0x13] = *(undefined4 *)(param_1 + 0x10);
    puVar2[1] = param_2;
    puVar2[0x18] = param_6;
    puVar2[0x19] = param_7;
  }
  return;
}

