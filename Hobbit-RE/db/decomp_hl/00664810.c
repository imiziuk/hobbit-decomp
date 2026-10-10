
void __fastcall FUN_00664810(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x344)) {
    puVar2 = (undefined4 *)(param_1 + 0x44);
    do {
      (**(code **)(*DAT_007f1000 + 0x14c))
                (DAT_007f1000,0,*(undefined4 *)(param_1 + 0x14),puVar2[-6]);
      (**(code **)(*DAT_007f1000 + 0x154))(DAT_007f1000,*(undefined4 *)(param_1 + 0x18),0);
      (**(code **)(*DAT_007f1000 + 0x130))(DAT_007f1000,puVar2[-8]);
      (**(code **)(*DAT_007f1000 + 0x11c))
                (DAT_007f1000,puVar2[-7],puVar2[-5],puVar2[-4] - puVar2[-5],puVar2[-3],*puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 10;
    } while (iVar1 < *(int *)(param_1 + 0x344));
  }
  return;
}

