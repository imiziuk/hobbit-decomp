
void __thiscall
FUN_005a52d0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 100) != 0) {
    if (param_3 != 0) {
      FUN_0066c3a0(3,0);
      FUN_0066d9c0(param_2);
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 100)) {
        do {
          uVar2 = 0;
          uVar4 = 0x80;
          uVar5 = 0x80;
          if (param_6 != 0) {
            switch(*(undefined1 *)(iVar6 + param_6)) {
            case 0:
              break;
            case 1:
              uVar2 = 0;
              uVar4 = 0xff;
              uVar5 = 0;
              break;
            case 2:
              uVar2 = 0x3d;
              uVar4 = 0x59;
              uVar5 = 0xab;
              break;
            default:
              uVar2 = 0x60;
              uVar5 = 0x60;
              uVar4 = 0x60;
              break;
            case 4:
              uVar2 = 0xff;
              uVar4 = 0x8c;
              uVar5 = 0;
              break;
            case 8:
              uVar2 = 0xff;
              uVar4 = 0;
              uVar5 = 0;
              break;
            case 0x10:
              uVar2 = 0;
              uVar4 = 0;
              uVar5 = 0;
              break;
            case 0x20:
              uVar2 = 0;
              uVar4 = 0;
              uVar5 = 0xff;
              break;
            case 0x40:
              uVar2 = 0xff;
              uVar4 = 0xff;
              uVar5 = 0;
            }
          }
          FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(0xff,uVar2),uVar4),uVar5));
          iVar7 = 0;
          do {
            iVar1 = *(int *)(param_1 + 0x90);
            iVar3 = FUN_005a40b0(iVar6,iVar7);
            local_48 = (float)*(ushort *)(iVar1 + iVar3 * 6) * *(float *)(param_1 + 0x30) +
                       *(float *)(param_1 + 0x24);
            iVar3 = FUN_005a40b0(iVar6,iVar7);
            local_44 = (float)*(ushort *)(iVar1 + 2 + iVar3 * 6) * *(float *)(param_1 + 0x34) +
                       *(float *)(param_1 + 0x28);
            iVar3 = FUN_005a40b0(iVar6,iVar7);
            local_40 = (float)*(ushort *)(iVar1 + 4 + iVar3 * 6) * *(float *)(param_1 + 0x38) +
                       *(float *)(param_1 + 0x2c);
            FUN_0066de80(&local_48);
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 100));
      }
      FUN_0066d9a0();
    }
    if (param_4 != 0) {
      FUN_0066c3a0(3,8);
      FUN_0066d9c0(param_2);
      FUN_0066c120(4);
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 100)) {
        do {
          FUN_0066ddd0(0xff00ffff);
          iVar7 = 0;
          do {
            iVar1 = *(int *)(param_1 + 0x90);
            iVar3 = FUN_005a40b0(iVar6,iVar7);
            local_48 = (float)*(ushort *)(iVar1 + iVar3 * 6) * *(float *)(param_1 + 0x30) +
                       *(float *)(param_1 + 0x24);
            iVar3 = FUN_005a40b0(iVar6,iVar7);
            local_44 = (float)*(ushort *)(iVar1 + 2 + iVar3 * 6) * *(float *)(param_1 + 0x34) +
                       *(float *)(param_1 + 0x28);
            iVar3 = FUN_005a40b0(iVar6,iVar7);
            local_40 = (float)*(ushort *)(iVar1 + 4 + iVar3 * 6) * *(float *)(param_1 + 0x38) +
                       *(float *)(param_1 + 0x2c);
            FUN_0066de80(&local_48);
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 100));
      }
      FUN_0066d9a0();
      FUN_0066c120(0);
    }
    FUN_0066d9c0(param_2);
    param_6 = 0;
    if (0 < *(int *)(param_1 + 0x5c)) {
      do {
        param_3 = 0;
        if (0 < *(int *)(param_1 + 0x58)) {
          iVar6 = *(int *)(param_1 + 0x54);
          do {
            param_2 = 0;
            if (0 < iVar6) {
              do {
                local_28 = (float)param_6 * *(float *)(param_1 + 0x44);
                local_48 = (float)param_2 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0xc);
                local_44 = (float)param_3 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x10);
                local_10 = local_28 + *(float *)(param_1 + 0x14);
                local_38 = *(float *)(param_1 + 0x40);
                local_34 = *(float *)(param_1 + 0x44);
                local_c = *(float *)(param_1 + 0x3c) + local_48;
                local_8 = local_38 + local_44;
                local_1c = local_34 + local_10;
                local_18 = local_48;
                local_14 = local_44;
                local_4 = local_1c;
                FUN_00669cf0(&local_18,0xffffff00);
                iVar6 = *(int *)(param_1 + 0x54);
                param_2 = param_2 + 1;
              } while (param_2 < iVar6);
            }
            param_3 = param_3 + 1;
          } while (param_3 < *(int *)(param_1 + 0x58));
        }
        param_6 = param_6 + 1;
      } while (param_6 < *(int *)(param_1 + 0x5c));
    }
    FUN_0066dac0();
  }
  return;
}

