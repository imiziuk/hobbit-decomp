
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004016e0(int param_1,int param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  float *pfVar5;
  float10 fVar6;
  undefined8 uVar7;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [12];
  float afStack_28 [3];
  undefined1 local_1c [12];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar3 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x150 + param_2 * 8),
                               *(undefined4 *)(param_1 + 0x154 + param_2 * 8));
  if ((piVar3 != (int *)0x0) && (_DAT_006e92f4 < *(float *)(param_1 + 0x188 + param_2 * 4))) {
    uVar4 = FUN_00402130(local_1c,piVar3 + 0x11,piVar3 + 0x14,0x3f000000);
    FUN_00402160(&local_70,uVar4);
    local_6c = (float)piVar3[0x12];
    FUN_00401f00(local_70 - *param_3,local_6c - param_3[1],local_68 - param_3[2]);
    if (local_64 * local_64 + local_60 * local_60 + local_5c * local_5c <
        (_DAT_0075b310 + DAT_0071ccb0) * (_DAT_0075b310 + DAT_0071ccb0)) {
      if ((DAT_0075b300 & 1) == 0) {
        DAT_0075b300 = DAT_0075b300 | 1;
        _DAT_0075b304 = 0.0;
        _DAT_0075b308 = 1.5707964;
        _DAT_0075b30c = 0.0;
        FUN_006bfe55(&DAT_00401b30);
      }
      pfVar5 = (float *)(**(code **)(*piVar3 + 0x30))();
      FUN_00401f00(_DAT_0075b304 + *pfVar5,_DAT_0075b308 + pfVar5[1],_DAT_0075b30c + pfVar5[2]);
      FUN_00401f20(auStack_34);
      FUN_004357e0(&uStack_40);
      fVar6 = (float10)FUN_00402000();
      if (((float10)_DAT_006e92f0 < fVar6 == ((float10)_DAT_006e92f0 == fVar6)) ||
         (fVar6 < (float10)_DAT_006e92ec == (fVar6 == (float10)_DAT_006e92ec))) {
        fVar6 = (float10)DAT_006e92e8 / SQRT(fVar6);
        fStack_10 = (float)((float10)fStack_10 * fVar6);
        fStack_c = (float)((float10)fStack_c * fVar6);
        fStack_8 = (float)((float10)fStack_8 * fVar6);
      }
      fVar6 = (float10)FUN_00402020(&local_70);
      fStack_4 = (float)-fVar6;
      fVar2 = _DAT_0075b310 + DAT_0071ccb0;
      FUN_00401f00(fStack_10 * fVar2,fStack_c * fVar2,fStack_8 * fVar2);
      FUN_00401f00(local_64 + local_70,local_60 + local_6c,local_5c + local_68);
      FUN_00401f00(local_70 - local_64,local_6c - local_60,local_68 - local_5c);
      fVar2 = DAT_0071ccb0 * DAT_0071ccb0;
      FUN_00402040(local_1c,&uStack_4c,&uStack_40);
      fVar6 = (float10)FUN_00402000();
      if (fVar6 < (float10)fVar2 != (NAN(fVar6) || NAN((float10)fVar2))) {
        fVar2 = fStack_10 * *param_3 + fStack_c * param_3[1] + fStack_8 * param_3[2] + fStack_4;
        FUN_004c7660(fVar2 < DAT_006e92e4);
        *(ushort *)((int)piVar3 + 0x15a) = *(ushort *)((int)piVar3 + 0x15a) & 0xbfff ^ 0x4000;
        FUN_004c77d0(0);
        bVar1 = fVar2 < DAT_006e92e4;
        *(undefined4 *)(param_1 + 0x188 + param_2 * 4) = 0;
        if (bVar1) {
          pfVar5 = &local_64;
        }
        else {
          FUN_00401f00(-local_64,-local_60,-local_5c);
          pfVar5 = afStack_28;
        }
        uStack_4c = 0x3f800000;
        uStack_48 = 0x3f800000;
        uStack_44 = 0x3f800000;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        FUN_00401f00(local_70,_DAT_0071ccb4 + local_6c,local_68);
        FUN_00401f00(fStack_58 + *pfVar5,fStack_54 + pfVar5[1],fStack_50 + pfVar5[2]);
        uVar7 = FUN_00488d30(s_StoneImpact_0071cee4,local_1c,&uStack_40,&uStack_4c);
        piVar3 = (int *)FUN_004021c0(uVar7);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x104))(0xff0066ff);
        }
        FUN_00659630(s_GateHit_0071cedc,&local_70,1);
      }
    }
  }
  return;
}

