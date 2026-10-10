
undefined4 __thiscall FUN_005be830(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  piVar4 = (int *)FUN_004021c0(param_2,param_3);
  if (*(short *)(param_1 + 0x42) == 2) {
    FUN_005af120();
    fVar7 = (float10)FUN_004a5770();
    if (fVar7 < (float10)DAT_006e92e4 != (fVar7 == (float10)DAT_006e92e4)) {
      switch(*(undefined1 *)(param_1 + 0x45)) {
      case 1:
      case 4:
      case 5:
      case 6:
      case 7:
        *(float *)(param_4 + 0x30) = *(float *)(param_4 + 0x30) * DAT_006e92e4;
        return 0;
      case 2:
        if ((piVar4 != (int *)0x0) &&
           (((iVar5 = *(int *)(param_4 + 0x28), iVar5 == 2 || (iVar5 == 1)) || (iVar5 == 7)))) {
          iVar5 = FUN_005af120();
          uVar2 = *(undefined4 *)(iVar5 + 8);
          uVar3 = *(undefined4 *)(iVar5 + 0xc);
          iVar5 = *piVar4;
          uVar6 = (**(code **)(iVar5 + 0x28))(0x3f800000,0,0,0x3f800000,0xc,0);
          (**(code **)(iVar5 + 0x78))(uVar2,uVar3,uVar6);
        }
        fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 8) + 0x214) + 0x1c);
        *(undefined4 *)(param_4 + 0x34) = 2;
        *(float *)(param_4 + 0x30) = fVar1 * *(float *)(param_4 + 0x30);
        break;
      case 3:
        if ((piVar4 != (int *)0x0) &&
           (((iVar5 = *(int *)(param_4 + 0x28), iVar5 == 2 || (iVar5 == 1)) || (iVar5 == 7)))) {
          iVar5 = FUN_005af120();
          uVar2 = *(undefined4 *)(iVar5 + 8);
          uVar3 = *(undefined4 *)(iVar5 + 0xc);
          iVar5 = *piVar4;
          uVar6 = (**(code **)(iVar5 + 0x28))(0x3f800000,0,0,0x3f800000,0xc,0);
          (**(code **)(iVar5 + 0x78))(uVar2,uVar3,uVar6);
        }
        fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 8) + 0x214) + 0x20);
        *(undefined4 *)(param_4 + 0x34) = 1;
        *(float *)(param_4 + 0x30) = fVar1 * *(float *)(param_4 + 0x30);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(iVar5 + 100) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(iVar5 + 0x68) = *(undefined4 *)(param_4 + 0x10);
  *(undefined4 *)(iVar5 + 0x6c) = *(undefined4 *)(param_4 + 0x14);
  *(undefined4 *)(iVar5 + 0x70) = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(param_4 + 0x1c);
  *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(param_4 + 0x20);
  *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(param_4 + 0x24);
  *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)(param_4 + 0x28);
  *(undefined4 *)(iVar5 + 0x84) = *(undefined4 *)(param_4 + 0x2c);
  *(undefined4 *)(iVar5 + 0x88) = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(param_4 + 0x34);
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 8;
  return 1;
}

