
void __fastcall FUN_00674000(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_40 [64];
  
  if ((*(uint *)(param_1 + 0x88) & 0x20) != 0) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffffdf;
    FUN_00673c30();
    FUN_00673dc0();
    puVar2 = (undefined4 *)FUN_0064e040(local_40,param_1 + 0x10c,param_1 + 0x8c);
    if (((undefined4 *)(param_1 + 0x1cc) != puVar2) && (puVar1 = puVar2 + 0x10, puVar2 != puVar1)) {
      puVar3 = (undefined4 *)(param_1 + 0x1d4);
      iVar4 = (int)puVar2 - (param_1 + 0x1cc);
      do {
        puVar3[-2] = *puVar2;
        puVar3[-1] = puVar2[1];
        *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
        puVar3[1] = puVar2[3];
        puVar2 = puVar2 + 4;
        puVar3 = puVar3 + 4;
      } while (puVar2 != puVar1);
    }
  }
  return;
}

