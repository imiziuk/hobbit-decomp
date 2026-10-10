
void __thiscall FUN_004b4af0(int param_1,undefined4 param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_005a7910();
  uVar5 = 0;
  *(int *)(param_1 + 0x130) = iVar3;
  if (*(short *)(param_1 + 0x124) != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0xb8);
  }
  *(int *)(iVar3 + 0x10) = param_1;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0x28) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(*(int *)(param_1 + 0x130) + 0x1c) = param_1 + 0x44;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x130) + 0x3c);
  *pbVar1 = *pbVar1 & 0xfd;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x130) + 0x3c);
  *pbVar1 = *pbVar1 & 0xfe;
  *(ushort *)(*(int *)(param_1 + 0x130) + 0x3c) =
       *(ushort *)(*(int *)(param_1 + 0x130) + 0x3c) & 0xffdf;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0x34) = uVar5;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0x14) = 0;
  *(int *)(*(int *)(param_1 + 0x130) + 0x24) = param_1 + 0xc4;
  *(int *)(*(int *)(param_1 + 0x130) + 0x20) = param_1 + 0xb0;
  uVar5 = FUN_00549470(param_1 + 0xbc);
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0x38) = uVar5;
  bVar2 = *(byte *)(*(int *)(param_1 + 0x130) + 8);
  *(byte *)(*(int *)(param_1 + 0x130) + 8) = (param_3 << 2 ^ bVar2) & 4 ^ bVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0x18) = 1;
  *(undefined **)(*(int *)(param_1 + 0x130) + 0x14) = &DAT_0075d400;
  if (((*(ushort *)(param_1 + 0x7a) & 0x3000) != 0) &&
     ((cVar4 = *(char *)(param_1 + 0x128) + -1, *(char *)(param_1 + 0x128) = cVar4, cVar4 < '\x01'
      || ((*(ushort *)(param_1 + 0x7a) & 0x1000) != 0)))) {
    FUN_004d2360(0,0);
  }
  return;
}

