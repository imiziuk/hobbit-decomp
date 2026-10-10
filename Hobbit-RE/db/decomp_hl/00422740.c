
void __thiscall FUN_00422740(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float fStack_10;
  float fStack_c;
  
  if ((((DAT_0075fbf4 == 0) || (-1 < param_2)) && (*(int *)(param_1 + 0x8d4) != 0x1b)) &&
     (*(int *)(param_1 + 0x8d8) != 0x1b)) {
    fVar2 = (float10)FUN_00434ca0(4);
    fStack_10 = (float)fVar2;
    fVar2 = (float10)FUN_00434ca0(6);
    fStack_c = (float)fVar2;
    fVar2 = (float10)FUN_00434ca0(4);
    fVar3 = (float10)FUN_00434ca0(6);
    if (DAT_006e92e4 < fStack_c) {
      fStack_c = (float)param_2 + fStack_c;
      if (fStack_c < DAT_006e92e4 == (NAN(fStack_c) || NAN(DAT_006e92e4))) {
        param_2 = 0;
      }
      else {
        param_2 = __ftol();
      }
    }
    iVar1 = FUN_0052a650();
    if ((iVar1 != 0) && (param_2 != 0)) {
      fStack_10 = (float)param_2 + fStack_10;
      if (fStack_10 < DAT_006e92e4 != (NAN(fStack_10) || NAN(DAT_006e92e4))) {
        fStack_10 = 0.0;
      }
      fVar4 = (float10)FUN_00434c10();
      if (fVar4 < (float10)fStack_10 != (NAN(fVar4) || NAN((float10)fStack_10))) {
        fVar4 = (float10)FUN_00434c10();
        fStack_10 = (float)fVar4;
      }
      if (((NAN(fStack_10) || NAN(DAT_006e92e4)) != (fStack_10 == DAT_006e92e4)) &&
         (*(int *)(param_1 + 0x8d4) != 0x2b)) {
        FUN_0043a3f0(0x1a,s_C__projects_meridian_Support_Obj_007200c0,0xea5);
      }
    }
    FUN_00434c40(4,fStack_10);
    FUN_00434c40(6,fStack_c);
    FUN_00434d10(0xaa,(float)fVar2 - fStack_10);
    FUN_00434d10(0xab,(float)fVar3 - fStack_c);
  }
  return;
}

