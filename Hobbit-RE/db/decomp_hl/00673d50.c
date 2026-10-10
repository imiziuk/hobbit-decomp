
void __fastcall FUN_00673d50(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    puVar2 = param_1 + 3;
    if ((param_1 + 0x33 != puVar2) && (puVar2 != param_1 + 0x13)) {
      puVar1 = param_1 + 0x35;
      iVar3 = (int)puVar2 - (int)(param_1 + 0x33);
      do {
        puVar1[-2] = *puVar2;
        puVar1[-1] = puVar2[1];
        *puVar1 = *(undefined4 *)(iVar3 + (int)puVar1);
        puVar1[1] = puVar2[3];
        puVar2 = puVar2 + 4;
        puVar1 = puVar1 + 4;
      } while (puVar2 != param_1 + 0x13);
    }
    param_1[0x3f] = *param_1;
    param_1[0x40] = param_1[1];
    param_1[0x41] = param_1[2];
    param_1[0x22] = param_1[0x22] & 0xfffffffd;
  }
  return;
}

