
void __fastcall FUN_0043ef60(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x798) = 0;
  *(undefined4 *)(param_1 + 0x79c) = 0;
  *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  if (((*(int *)(param_1 + 0x3c0) == 0) && (*(int *)(param_1 + 0x3d0) == 0)) &&
     (*(int *)(param_1 + 0x3b0) == 0)) {
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    pcVar2 = s_crouch_slide_00724220;
  }
  else {
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    pcVar2 = s_crouch_00724230;
  }
  uVar5 = 0x3e000000;
  uVar4 = 1;
  uVar3 = 0;
  uVar1 = FUN_0053cc70(pcVar2);
  FUN_00540840(uVar1,uVar3,uVar4,uVar5);
  local_c = *(undefined4 *)(param_1 + 0x754);
  local_4 = *(undefined4 *)(param_1 + 0x75c);
  local_8 = 0;
  FUN_00442560(&local_c,*(undefined4 *)(*(int *)(param_1 + 0x450) + 0x84));
  FUN_004430e0(2);
  *(undefined4 *)(param_1 + 0x9c0) = 0;
  FUN_0044c120(0x10,0x3f800000);
  return;
}

