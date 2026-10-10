
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0044cf70(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  float fVar6;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  iVar1 = param_1[0x235];
  uVar4 = 0;
  if (((iVar1 != 0x1a) && (iVar1 != 0x2b)) && (iVar1 != 0x15)) {
    if (((*param_2 != 0 || param_2[1] != 0) && (param_1[0x194] != 0)) &&
       (iVar1 = FUN_004021c0(*param_2,param_2[1]), iVar1 != 0)) {
      switch(*(undefined1 *)(iVar1 + 0x7c)) {
      case 5:
        if ((*(uint *)(iVar1 + 0x10) & 0x2000000) != 0) {
          local_24 = (*(float *)(iVar1 + 0x44) + *(float *)(iVar1 + 0x50)) * _DAT_006e936c;
          local_20 = (*(float *)(iVar1 + 0x54) + *(float *)(iVar1 + 0x48)) * _DAT_006e936c;
          local_1c = (*(float *)(iVar1 + 0x58) + *(float *)(iVar1 + 0x4c)) * _DAT_006e936c;
          local_4 = (float)param_1[0x16] + (float)param_1[0x13];
          local_18 = ((float)param_1[0x11] + (float)param_1[0x14]) * _DAT_006e936c;
          local_14 = ((float)param_1[0x15] + (float)param_1[0x12]) * _DAT_006e936c;
          local_10 = local_4 * _DAT_006e936c;
          iVar1 = FUN_00431660(&local_18,&local_24);
          if (iVar1 == 0) {
            FUN_0043a3f0(0x28,s_C__projects_meridian_Support_Obj_007248b0,0x1c7);
            param_1[0x294] = param_1[0x1652];
            param_1[0x295] = param_1[0x1653];
            uVar4 = 1;
          }
        }
        break;
      case 0x24:
        iVar2 = FUN_004d57a0();
        if (iVar2 == 0) {
          iVar2 = FUN_004d57b0();
          if (iVar2 == 0) {
            FUN_004d5bd0();
            return 1;
          }
          iVar2 = FUN_0041bcc0();
          *(int *)(iVar2 + 0x4ec4) = iVar1;
          FUN_0052d910();
          return 1;
        }
        break;
      case 0x31:
        uVar3 = 0;
        uVar4 = FUN_0042b100(6);
        iVar1 = FUN_00670ef0(uVar4,uVar3);
        if (iVar1 == 0) {
          uVar4 = FUN_0042b100(7);
          iVar1 = FUN_00670ef0(uVar4,iVar1);
          if (iVar1 == 0) {
            uVar4 = FUN_0042b100(8);
            iVar1 = FUN_00670ef0(uVar4,iVar1);
            if (iVar1 == 0) {
              return 0;
            }
          }
        }
        fVar5 = (float10)(**(code **)(*param_1 + 0x10c))();
        fVar6 = (float)fVar5;
        uVar4 = (**(code **)(*param_1 + 0x28))(fVar6);
        FUN_004cda30(uVar4,fVar6);
        return 1;
      case 0x33:
        FUN_004d2f50();
        return 1;
      case 0x35:
        uVar3 = (**(code **)(*param_1 + 0x28))();
        iVar1 = FUN_004df1c0(uVar3);
        if (iVar1 != 0) {
          iVar1 = FUN_004de6a0();
          if (iVar1 == 0) {
            iVar1 = FUN_004dd2c0();
            if (iVar1 != 0) {
              FUN_004dd2d0();
              return 1;
            }
          }
          else if (param_1[0x1634] == 0) {
            FUN_0044d280();
            return 1;
          }
        }
      }
    }
    return uVar4;
  }
  return 0;
}

