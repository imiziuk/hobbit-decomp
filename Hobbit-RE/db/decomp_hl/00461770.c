
void __thiscall FUN_00461770(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d07a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_camera_path__OnImport_00726128);
  iVar2 = param_2;
  iVar3 = 0;
  local_4 = 0;
  local_24 = 0x7f7fffff;
  local_20 = 0x7f7fffff;
  local_1c = 0x7f7fffff;
  local_18 = 0xff7fffff;
  local_14 = 0xff7fffff;
  local_10 = 0xff7fffff;
  FUN_006403a0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,local_30);
  FUN_00640500(s_Orient_00726120,local_3c);
  FUN_006403a0(s_Scale_00725a04,local_48);
  FUN_006404b0(&DAT_00726118,&local_24);
  FUN_00460460(local_30,local_3c,local_48,&local_24);
  FUN_006405b0(s_Loops_007259f0,param_1 + 0xac);
  FUN_006403a0(s_Range_00726110,param_1 + 200);
  FUN_006403a0(&PTR_Unwind_00725c6c,param_1 + 0xd4);
  FUN_00640420(s_PlaySpeed_00726104,param_1 + 0xc0);
  FUN_006403a0(s_CamPosOffset_007260f4,param_1 + 0x118);
  FUN_00640500(s_CamRotOffset_007260e4,param_1 + 0x124);
  FUN_006405e0(s_LookatGuid_007260d8,param_1 + 0x130);
  FUN_006403a0(s_LookatOffset_007260c8,param_1 + 0x138);
  FUN_006405b0(s_FromCenter_007260bc,param_1 + 0x148);
  FUN_006405b0(s_Interpolate_007260b0,param_1 + 0xc4);
  FUN_006405b0(s_Lookspring_007260a4,param_1 + 0x144);
  FUN_0063ff20();
  iVar2 = *(int *)(iVar2 + 0xc);
  *(int *)(param_1 + 0xa8) = iVar2;
  uVar1 = FUN_006747f0(iVar2 * 0xe);
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  if (0 < *(int *)(param_1 + 0xa8)) {
    iVar2 = 0;
    do {
      FUN_0063ffc0();
      FUN_00640450(&DAT_00726090,&param_2);
      *(undefined2 *)(iVar2 + *(int *)(param_1 + 0xb0)) = (undefined2)param_2;
      FUN_00640450(&DAT_00726088,&param_2);
      *(undefined2 *)(iVar2 + 2 + *(int *)(param_1 + 0xb0)) = (undefined2)param_2;
      FUN_00640450(&DAT_00726080,&param_2);
      *(undefined2 *)(iVar2 + 4 + *(int *)(param_1 + 0xb0)) = (undefined2)param_2;
      FUN_00640450(&DAT_00726078,&param_2);
      *(undefined2 *)(iVar2 + 6 + *(int *)(param_1 + 0xb0)) = (undefined2)param_2;
      FUN_00640450(&DAT_00726070,&param_2);
      *(undefined2 *)(iVar2 + 8 + *(int *)(param_1 + 0xb0)) = (undefined2)param_2;
      FUN_00640450(&DAT_00726068,&param_2);
      *(undefined2 *)(iVar2 + 10 + *(int *)(param_1 + 0xb0)) = (undefined2)param_2;
      FUN_00640450(&DAT_00726060,&param_2);
      *(undefined2 *)(iVar2 + 0xc + *(int *)(param_1 + 0xb0)) = (undefined2)param_2;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xe;
    } while (iVar3 < *(int *)(param_1 + 0xa8));
  }
  FUN_00461a70();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

