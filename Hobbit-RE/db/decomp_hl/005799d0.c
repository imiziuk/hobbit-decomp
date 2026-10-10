
void __thiscall
FUN_005799d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x42d8);
  uVar2 = *(undefined4 *)(param_1 + 0x42dc);
  switch(*(undefined4 *)(param_1 + 0x3d48)) {
  case 1:
    FUN_00579de0(param_2,param_3,uVar1,uVar2,param_6);
    return;
  case 2:
  case 3:
    FUN_00579e00(param_2,param_3,uVar1,uVar2,param_6);
    return;
  case 4:
  case 5:
  case 6:
    FUN_0057a0b0(param_2,param_3,uVar1,uVar2,param_6);
  }
  return;
}

