
void __thiscall
FUN_0045a1a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_4;
  
  uVar8 = 0;
  uVar7 = 1;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  local_4 = 0xff282828;
  iVar1 = param_1;
  FUN_00425250(&local_4);
  FUN_004c08b0(param_2,param_3,param_4,param_5,iVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  uVar2 = FUN_0054f5b0(2,0xbf800000);
  *(undefined4 *)(param_1 + 0x19c) = uVar2;
  return;
}

