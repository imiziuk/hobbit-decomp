
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00429110(int *param_1)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  float10 fVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_c;
  float fStack_8;
  undefined4 uStack_4;
  
  FUN_00446eb0();
  if ((NAN((float)param_1[0x184]) || NAN(DAT_006e92e4)) == ((float)param_1[0x184] == DAT_006e92e4))
  {
    local_c = 0;
    fVar4 = (float10)(**(code **)(*param_1 + 0x10c))();
    fStack_8 = (float)fVar4;
    uStack_4 = 0;
    FUN_00429030(&local_c);
    fVar2 = (float)param_1[0x18c] * 0.0 + (float)param_1[0x18d] * 0.0 + (float)param_1[0x18e] * 1.0;
    if (_DAT_006e99f4 <= fVar2) {
      FUN_00422590();
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      uVar8 = 0x3e000000;
      uVar7 = 1;
      uVar6 = 0;
      pcVar5 = s_TARG_JUMP_007204bc;
      goto LAB_004293ae;
    }
    if (fVar2 < _DAT_006e99f0 == (fVar2 == _DAT_006e99f0)) {
      fVar2 = (DAT_006e92e4 * 0.0 - 1.0) * (float)param_1[0x18c] +
              (DAT_006e92e4 * 1.0 - DAT_006e92e4 * 0.0) * (float)param_1[0x18d] +
              (0.0 - DAT_006e92e4 * 0.0) * (float)param_1[0x18e];
      if (fVar2 < _DAT_006e99f4) {
        if (fVar2 < _DAT_006e99f0 == (fVar2 == _DAT_006e99f0)) goto LAB_004293c4;
        uVar8 = 0x3e000000;
        uVar7 = 1;
        uVar6 = 0;
        if (param_1[0xf4] == 0) {
          pcVar5 = s_STING_TARG_JUMP_LEFT_00720444;
        }
        else {
          pcVar5 = s_STAFF_TARG_JUMP_LEFT_007203b4;
        }
        FUN_0041ba80(pcVar5,0,1,0x3e000000);
        uVar3 = FUN_0053cc70(pcVar5);
        FUN_00540840(uVar3,uVar6,uVar7,uVar8);
        param_1[0x1e5] = 0x3fc00000;
        uVar6 = 2;
      }
      else {
        if (param_1[0xf4] == 0) {
          uVar8 = 0x3e000000;
          uVar7 = 1;
          uVar6 = 0;
          pcVar5 = s_STING_TARG_JUMP_RIGHT_0072042c;
          FUN_0041ba80(s_STING_TARG_JUMP_RIGHT_0072042c,0,1,0x3e000000);
        }
        else {
          FUN_00549470(param_1 + 0x115);
          FUN_00549580(param_1 + 0x115);
          uVar8 = 0x3e000000;
          uVar7 = 1;
          uVar6 = 0;
          pcVar5 = s_STAFF_TARG_JUMP_RIGHT_0072039c;
        }
        uVar3 = FUN_0053cc70(pcVar5);
        FUN_00540840(uVar3,uVar6,uVar7,uVar8);
        param_1[0x1e5] = 0x3fc00000;
        uVar6 = 2;
      }
    }
    else {
      piVar1 = param_1 + 0x115;
      if (param_1[0xf4] == 0) {
        FUN_00549470(piVar1);
        FUN_00549580(piVar1);
        pcVar5 = s_STING_TARG_JUMP_BACK_0072045c;
      }
      else {
        FUN_00549470(piVar1);
        FUN_00549580(piVar1);
        pcVar5 = s_STAFF_TARG_JUMP_BACK_007203cc;
      }
      uVar3 = 0x3e000000;
      uVar8 = 1;
      uVar7 = 0;
      uVar6 = FUN_0053cc70(pcVar5);
      FUN_00540840(uVar6,uVar7,uVar8,uVar3);
      param_1[0x1e5] = 0x3f800000;
      uVar6 = 2;
    }
  }
  else {
    FUN_00422590();
    uVar8 = 0x3e000000;
    uVar7 = 1;
    uVar6 = 0;
    pcVar5 = s_TARG_JUMP_007204bc;
    FUN_0041ba80(s_TARG_JUMP_007204bc,0,1,0x3e000000);
LAB_004293ae:
    uVar3 = FUN_0053cc70(pcVar5);
    FUN_00540840(uVar3,uVar6,uVar7,uVar8);
    uVar6 = 3;
  }
  FUN_004430e0(uVar6);
LAB_004293c4:
  param_1[0x1ef] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ed] = 0;
  param_1[0x272] = param_1[6];
  param_1[0x273] = param_1[6];
  param_1[0x17b0] = 1;
  return;
}

