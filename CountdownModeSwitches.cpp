            if (true /* @Isabella add section to sense for free fall */)
           //double still = acc_imu_0.norm();
            double fall = acc_imu_0.norm();
            //calculate range
            //other possible idea (calculations between still and fall)
            //eventually move to other matrix setup for still and fall
            if !(G_2_MS2-2 < fall < G_2_MS2+2)//gravity constant +=2 in mission constant
            {
                ws.mode = PL_COUNTDOWN_TO_FREE_FALL;
            }
            if (-2.0 < fall < 2.0)
            {
                ws.mode = PL_COUNTDOWN_TO_FREE_FALL;
            }
