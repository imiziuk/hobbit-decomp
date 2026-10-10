
int __fastcall FUN_005bede0(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00567b20(2);
  uVar4 = FUN_005af0f0();
  *(undefined8 *)(iVar2 + 0x40) = uVar4;
  switch(*(undefined1 *)(param_1 + 0x45)) {
  case 1:
    *(undefined4 *)(iVar2 + 0xc) = 0x19;
    return iVar2;
  case 2:
    *(undefined4 *)(iVar2 + 0xc) = 0x15;
    fVar1 = *(float *)(*(int *)(param_1 + 8) + 0xd4);
    if (fVar1 < DAT_006e92e4 != (fVar1 == DAT_006e92e4)) {
      fVar3 = (float10)FUN_00647b30(0x3f000000,0x40000000);
      *(float *)(*(int *)(param_1 + 8) + 0xd4) = (float)fVar3;
    }
    break;
  case 3:
    *(undefined4 *)(iVar2 + 0xc) = 0x17;
    fVar1 = *(float *)(*(int *)(param_1 + 8) + 0xd4);
    if (fVar1 < DAT_006e92e4 != (fVar1 == DAT_006e92e4)) {
      fVar3 = (float10)FUN_00647b30(0x3f800000,0x40400000);
      *(float *)(*(int *)(param_1 + 8) + 0xd4) = (float)fVar3;
    }
    return iVar2;
  case 4:
    *(undefined4 *)(iVar2 + 0xc) = 0x14;
    return iVar2;
  case 5:
    *(undefined4 *)(iVar2 + 0xc) = 0x13;
    return iVar2;
  case 6:
    *(undefined4 *)(iVar2 + 0xc) = 0x11;
    return iVar2;
  case 7:
    *(undefined4 *)(iVar2 + 0xc) = 0x12;
    return iVar2;
  case 8:
    *(undefined4 *)(iVar2 + 0xc) = 0x3d;
    return iVar2;
  default:
    return 0;
  }
  return iVar2;
}

