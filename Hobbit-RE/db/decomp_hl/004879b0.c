
undefined4 * __thiscall FUN_004879b0(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_250 [540];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_c;
  float fStack_8;
  
  iVar2 = FUN_00647e40(param_3,s_Cells_Cell_Size__cm__00729008);
  if (iVar2 == 0) {
    FUN_00425440();
    fStack_8 = *(float *)(param_1 + 0x100);
    goto LAB_004879e4;
  }
  iVar2 = FUN_00647e40(param_3,s_Cells___X_Cells_00728ff8);
  if (iVar2 == 0) {
    FUN_00406a80();
    uStack_c = *(undefined4 *)(param_1 + 0x104);
  }
  else {
    iVar2 = FUN_00647e40(param_3,s_Cells___Z_Cells_00728fe8);
    if (iVar2 == 0) {
      FUN_00406a80();
      uStack_c = *(uint *)(param_1 + 0x108);
LAB_00487a9c:
      *param_2 = 1;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar2 = FUN_00647e40(param_3,s_Cells_Nearby_Particle_Threshold_00728fc8);
    if (iVar2 == 0) {
      FUN_00406a80();
      uStack_c = *(uint *)(param_1 + 0x14c);
LAB_00487af8:
      *param_2 = 1;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar2 = FUN_00647e40(param_3,s_Particles___Particles_00728fa4);
    if (iVar2 != 0) {
      iVar2 = FUN_00647e40(param_3,s_Particles_Init___Particles_00728f88);
      if (iVar2 == 0) {
        FUN_00406a80();
        fStack_8 = (float)*(int *)(param_1 + 0x110);
        *param_2 = 2;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar2 = FUN_00647e40(param_3,s_Particles_Particle_Size_00728f70);
      if (iVar2 == 0) {
        FUN_00406a80();
        fStack_8 = *(float *)(param_1 + 0x114);
      }
      else {
        iVar2 = FUN_00647e40(param_3,s_Particles_Min_Particle_Alpha_00728f50);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_c = (uint)*(byte *)(param_1 + 0x118);
          goto LAB_00487a9c;
        }
        iVar2 = FUN_00647e40(param_3,s_Particles_Max_Particle_Alpha_00728f30);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_c = (uint)*(byte *)(param_1 + 0x119);
          goto LAB_00487af8;
        }
        iVar2 = FUN_00647e40(param_3,s_General_Movement_Mode_0072910c);
        if (iVar2 == 0) {
          FUN_00406a80();
          uStack_c = *(undefined4 *)(param_1 + 0x130);
          *param_2 = 0xc;
          goto LAB_00487a5c;
        }
        iVar2 = FUN_00647e40(param_3,s_General_Movement_Scale_007290f4);
        if (iVar2 == 0) {
          FUN_00406a80();
          fStack_8 = *(float *)(param_1 + 0x144);
          goto LAB_004880f1;
        }
        FUN_00406a80();
        iVar2 = FUN_00647cf0(s_General_Movement_Vector_007290dc);
        iVar3 = FUN_00647e80(param_3,s_General_Movement_Vector_007290dc,iVar2);
        if (iVar3 == 0) {
          iVar3 = FUN_00647cf0(param_3);
          if (iVar2 == iVar3) {
            uStack_34 = *(undefined4 *)(param_1 + 0x138);
            uStack_30 = *(undefined4 *)(param_1 + 0x13c);
            uStack_2c = *(undefined4 *)(param_1 + 0x140);
            *param_2 = 8;
            goto LAB_00487a5c;
          }
          iVar2 = iVar2 + param_3;
          iVar3 = FUN_00647e40(&DAT_00724e78,iVar2);
          if (iVar3 == 0) {
            fStack_8 = *(float *)(param_1 + 0x138);
          }
          else {
            iVar3 = FUN_00647e40(&DAT_00724e74,iVar2);
            if (iVar3 == 0) {
              fStack_8 = *(float *)(param_1 + 0x13c);
              *param_2 = 2;
              goto LAB_00487a5c;
            }
            iVar2 = FUN_00647e40(&DAT_00724e70,iVar2);
            if (iVar2 != 0) goto LAB_00487d94;
            fStack_8 = *(float *)(param_1 + 0x140);
          }
          *param_2 = 2;
          goto LAB_00487a5c;
        }
LAB_00487d94:
        iVar2 = FUN_00647e40(param_3,s_General_Boundary_Mode_007290c4);
        if (iVar2 == 0) {
          FUN_00425440();
          uStack_c = *(undefined4 *)(param_1 + 0x134);
          *param_2 = 0xc;
          FUN_00424770(auStack_250);
          return param_2;
        }
        FUN_00425440();
        iVar2 = FUN_00647cf0(s_General_Tint_007290b4);
        iVar3 = FUN_00647e80(param_3,s_General_Tint_007290b4,iVar2);
        if (iVar3 == 0) {
          iVar3 = FUN_00647cf0(param_3);
          if (iVar2 == iVar3) {
            FUN_00425250((byte *)(param_1 + 0x150));
            *param_2 = 0x11;
            FUN_00424770(auStack_250);
            return param_2;
          }
          iVar2 = iVar2 + param_3;
          iVar3 = FUN_00647e40(&DAT_00728244,iVar2);
          if (iVar3 == 0) {
            bVar1 = *(byte *)(param_1 + 0x152);
          }
          else {
            iVar3 = FUN_00647e40(&DAT_00728240,iVar2);
            if (iVar3 == 0) {
              uStack_c = (uint)*(byte *)(param_1 + 0x151);
              goto LAB_00487edb;
            }
            iVar3 = FUN_00647e40(&DAT_0072823c,iVar2);
            if (iVar3 == 0) {
              uStack_c = (uint)*(byte *)(param_1 + 0x150);
              goto LAB_00487edb;
            }
            iVar2 = FUN_00647e40(&DAT_00728238,iVar2);
            if (iVar2 != 0) goto LAB_00487f0c;
            bVar1 = *(byte *)(param_1 + 0x153);
          }
          uStack_c = (uint)bVar1;
LAB_00487edb:
          *param_2 = 1;
          FUN_00424770(auStack_250);
          return param_2;
        }
LAB_00487f0c:
        iVar2 = FUN_00647e40(param_3,s_General_Sleep_Distance_0072909c);
        if (iVar2 == 0) {
          FUN_00425440();
          fStack_8 = *(float *)(param_1 + 300);
LAB_004879e4:
          *param_2 = 2;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_General_Pain_Mode_00729088);
        if (iVar2 == 0) {
          FUN_00425440();
          uStack_c = *(undefined4 *)(param_1 + 0x154);
          goto LAB_00487a40;
        }
        iVar2 = FUN_00647e40(param_3,s_General_Pain_Freq__sec__00729070);
        if (iVar2 == 0) {
          FUN_00425440();
          fStack_8 = *(float *)(param_1 + 0x158);
LAB_004880f1:
          *param_2 = 2;
          FUN_00424770(auStack_250);
          return param_2;
        }
        iVar2 = FUN_00647e40(param_3,s_General_Poison_Duration__secs___h_0072903c);
        if (iVar2 == 0) {
          FUN_00406a80();
          fStack_8 = *(float *)(param_1 + 0x15c);
          goto LAB_004879e4;
        }
        iVar2 = FUN_00647e40(param_3,s_General_Pain_Amount_00729028);
        if (iVar2 != 0) {
          iVar2 = FUN_00647e40(param_3,s_Forces_Push_Scalar_00728f14);
          if (iVar2 == 0) {
            FUN_00406a80();
            fStack_8 = *(float *)(param_1 + 0x11c);
          }
          else {
            iVar2 = FUN_00647e40(param_3,s_Forces_Pull_Scalar_00728f00);
            if (iVar2 == 0) {
              FUN_00406a80();
              fStack_8 = *(float *)(param_1 + 0x120);
              *param_2 = 2;
              FUN_00424770(auStack_250);
              return param_2;
            }
            iVar2 = FUN_00647e40(param_3,s_Forces_Total_Force_Scalar_00728ee4);
            if (iVar2 == 0) {
              FUN_00406a80();
              fStack_8 = *(float *)(param_1 + 0x124);
              *param_2 = 2;
              FUN_00424770(auStack_250);
              return param_2;
            }
            iVar2 = FUN_00647e40(param_3,s_Forces_Viscosity_00728ed0);
            if (iVar2 != 0) {
              FUN_004e37d0(param_2,param_3);
              return param_2;
            }
            FUN_00406a80();
            fStack_8 = *(float *)(param_1 + 0x128);
          }
          goto LAB_004880f1;
        }
        FUN_00406a80();
        fStack_8 = *(float *)(param_1 + 0x160);
      }
      *param_2 = 2;
      goto LAB_00487a5c;
    }
    FUN_00406a80();
    uStack_c = *(undefined4 *)(param_1 + 0x10c);
  }
LAB_00487a40:
  *param_2 = 1;
LAB_00487a5c:
  FUN_00424770(auStack_250);
  return param_2;
}

